import numpy as np
from pyrsgis import raster
from scipy.stats.stats import pearsonr

RasterFile1 = 'e:/ndvi.tif'
RasterFile2 = 'e:/prec.tif'
ds1, tempArr1 = raster.read(RasterFile1)
ds2, tempArr2 = raster.read(RasterFile2)
nBands1, rows1, cols1 = ds1.RasterCount, ds1.RasterXSize, ds1.RasterYSize
features1 = np.empty((nBands1, cols1, rows1))
features2 = np.empty((nBands1, cols1, rows1))
features1[:, :, :] = tempArr1
features2[:, :, :] = tempArr2
features_result1 = np.empty((cols1, rows1))
features_result2 = np.empty((cols1, rows1))

for i in range(0, cols1):
    for j in range(0, rows1):
        list1 = []
        list2 = []
        for k in range(0, nBands1):
            list1.append(features1[k, i, j])
            list2.append(features2[k, i, j])
        r, p_value = pearsonr(list1, list2)
        features_result1[i, j] = r
        features_result2[i, j] = p_value
outFile1 = 'd:/aa.tif'
outFile2 = 'd:/bb.tif'
raster.export(features_result1, ds1, filename=outFile1, dtype='float', bands='all')
raster.export(features_result2, ds1, filename=outFile2, dtype='float', bands='all')