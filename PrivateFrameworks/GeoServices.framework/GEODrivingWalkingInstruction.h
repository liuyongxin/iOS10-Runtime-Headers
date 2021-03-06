/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODrivingWalkingInstruction : PBCodable <NSCopying> {
    NSMutableArray * _continueCommands;
    GEOFormattedString * _distance;
    NSMutableArray * _mergeCommands;
    NSMutableArray * _normalCommands;
}

@property (nonatomic, retain) NSMutableArray *continueCommands;
@property (nonatomic, retain) GEOFormattedString *distance;
@property (nonatomic, readonly) bool hasDistance;
@property (nonatomic, retain) NSMutableArray *mergeCommands;
@property (nonatomic, retain) NSMutableArray *normalCommands;

+ (Class)continueCommandType;
+ (Class)mergeCommandType;
+ (Class)normalCommandType;

- (void)addContinueCommand:(id)arg1;
- (void)addMergeCommand:(id)arg1;
- (void)addNormalCommand:(id)arg1;
- (void)clearContinueCommands;
- (void)clearMergeCommands;
- (void)clearNormalCommands;
- (id)continueCommandAtIndex:(unsigned long long)arg1;
- (id)continueCommands;
- (unsigned long long)continueCommandsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)distance;
- (bool)hasDistance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mergeCommandAtIndex:(unsigned long long)arg1;
- (id)mergeCommands;
- (unsigned long long)mergeCommandsCount;
- (void)mergeFrom:(id)arg1;
- (id)normalCommandAtIndex:(unsigned long long)arg1;
- (id)normalCommands;
- (unsigned long long)normalCommandsCount;
- (bool)readFrom:(id)arg1;
- (void)setContinueCommands:(id)arg1;
- (void)setDistance:(id)arg1;
- (void)setMergeCommands:(id)arg1;
- (void)setNormalCommands:(id)arg1;
- (void)writeTo:(id)arg1;

@end
