/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUISingleNamedAssetCreator : NSObject {
    long long  _compressionType;
    double  _flattenedCompressionQuality;
    NSMutableArray * _generators;
    double  _layersCompressionQuality;
    NSMutableArray * _names;
    unsigned long long  _primaryIndex;
    NSString * _primaryName;
    double  _radiosityCompressionQuaility;
    CUIMutableCommonAssetStorage * _store;
}

@property (retain) NSMutableArray *generators;
@property (retain) NSMutableArray *names;
@property unsigned long long primaryIndex;
@property (retain) NSString *primaryName;
@property (retain) CUIMutableCommonAssetStorage *store;

- (id)_addImage:(struct CGImage { }*)arg1 withBaseKey:(id)arg2 name:(id)arg3;
- (void)_addImageAsJPEG:(struct CGImage { }*)arg1 withBaseKey:(id)arg2 withName:(id)arg3;
- (void)_configureDefaultStorageParameters;
- (id)_defaultBaseKey;
- (bool)_distillNameEntries:(id*)arg1;
- (bool)_distillRenditions:(id*)arg1;
- (bool)_extractFlattenedImages:(id*)arg1;
- (void)_finalizeNameIdentifiers;
- (id)_flattenedImageBaseKey;
- (id)_generatorForName:(id)arg1;
- (id)_keyDataFromKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)_keyFormat;
- (id)_radiosityImageBaseKey;
- (void)addFlattenedImage:(struct CGImage { }*)arg1 forLayerStackWithName:(id)arg2;
- (void)addImage:(struct CGImage { }*)arg1 withName:(id)arg2;
- (void)addImageAsJPEG:(struct CGImage { }*)arg1 withName:(id)arg2;
- (void)addLayerReference:(id)arg1 forImage:(struct CGImage { }*)arg2 toLayerStackWithName:(id)arg3;
- (void)addLayerStackWithSize:(struct CGSize { double x1; double x2; })arg1 stackData:(id)arg2 name:(id)arg3;
- (double)compressionQuality;
- (long long)compressionType;
- (void)dealloc;
- (bool)distillAndSave:(id*)arg1;
- (double)flattenedLossyCompressionQuality;
- (id)generators;
- (id)initWithOutputURL:(id)arg1 versionString:(id)arg2;
- (double)layersLossyCompressionQuality;
- (id)names;
- (id)path;
- (unsigned long long)primaryIndex;
- (id)primaryName;
- (double)radiosityLossyCompressionQuality;
- (void)setCompressionQuality:(double)arg1;
- (void)setCompressionType:(long long)arg1;
- (void)setFlattenedLossyCompressionQuality:(double)arg1;
- (void)setGenerators:(id)arg1;
- (void)setLayersLossyCompressionQuality:(double)arg1;
- (void)setNames:(id)arg1;
- (void)setPrimaryIndex:(unsigned long long)arg1;
- (void)setPrimaryName:(id)arg1;
- (void)setRadiosityLossyCompressionQuality:(double)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end