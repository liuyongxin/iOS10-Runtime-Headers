/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKDevice : NSObject <NSCopying, NSSecureCoding> {
    NSString * _MLBSerialNumber;
    NSString * _ROMAddress;
    NSNumber * _backingColor;
    NSString * _color;
    NSNumber * _coverGlassColor;
    NSString * _enclosureColor;
    NSNumber * _housingColor;
    bool  _isMonitoringUnlockEvents;
    unsigned long long  _linkType;
    NSLocale * _locale;
    NSString * _modelNumber;
    NSLock * _monitoringLock;
    NSString * _serverFriendlyDescription;
    struct __CTServerConnection { } * _telephonyConnectionRef;
    NSLock * _telephonyLock;
    NSString * _uniqueDeviceIdentifier;
}

@property (copy) NSString *MLBSerialNumber;
@property (copy) NSString *ROMAddress;
@property (copy) NSNumber *backingColor;
@property (copy) NSString *color;
@property (copy) NSNumber *coverGlassColor;
@property (copy) NSString *enclosureColor;
@property bool hasBeenUnlockedSinceLastCheckIn;
@property (copy) NSNumber *housingColor;
@property (readonly) NSString *integratedCircuitCardIdentifier;
@property (readonly) NSString *internationalMobileEquipmentIdentity;
@property (readonly) bool isAppleIDLoginEnabled;
@property (readonly) bool isInCircle;
@property (readonly) bool isInternalBuild;
@property (readonly) bool isMultiUserMode;
@property (readonly) bool isProtectedWithPasscode;
@property (readonly) bool isUnlocked;
@property (setter=setLinkType:) unsigned long long linkType;
@property (copy) NSLocale *locale;
@property (readonly) NSString *mobileEquipmentIdentifier;
@property (copy) NSString *modelNumber;
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *serialNumber;
@property (readonly) NSData *serializedData;
@property (copy) NSString *serverFriendlyDescription;
@property (copy) NSString *uniqueDeviceIdentifier;
@property (readonly) NSString *userChosenName;

+ (id)_buildNumber;
+ (id)_generateServerFriendlyDescription;
+ (id)_generateServerFriendlyDescriptionForPairedDevice:(id)arg1;
+ (id)_hardwareModel;
+ (id)_lookUpCurrentBackingColor;
+ (id)_lookUpCurrentColor;
+ (id)_lookUpCurrentCoverGlassColor;
+ (id)_lookUpCurrentEnclosureColor;
+ (id)_lookUpCurrentHousingColor;
+ (id)_lookUpCurrentUniqueDeviceID;
+ (id)_lookupMLBSerialNumber;
+ (id)_lookupModelNumber;
+ (id)_lookupROMAddress;
+ (id)_osName;
+ (id)_osVersion;
+ (id)activeIDSPeerDevice;
+ (id)currentDevice;
+ (id)deviceSpecificLocalizedStringWithKey:(id)arg1;
+ (id)deviceWithSerializedData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MLBSerialNumber;
- (id)ROMAddress;
- (struct __CTServerConnection { }*)_telephonyConnection;
- (id)backingColor;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverGlassColor;
- (void)dealloc;
- (id)description;
- (id)enclosureColor;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBeenUnlockedSinceLastCheckIn;
- (id)housingColor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)integratedCircuitCardIdentifier;
- (id)internationalMobileEquipmentIdentity;
- (bool)isAppleIDLoginEnabled;
- (bool)isInCircle;
- (bool)isInternalBuild;
- (bool)isMultiUserMode;
- (bool)isProtectedWithPasscode;
- (bool)isUnlocked;
- (unsigned long long)linkType;
- (id)locale;
- (id)mobileEquipmentIdentifier;
- (id)modelNumber;
- (id)phoneNumber;
- (id)serialNumber;
- (id)serializedData;
- (id)serverFriendlyDescription;
- (void)setBackingColor:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setCoverGlassColor:(id)arg1;
- (void)setEnclosureColor:(id)arg1;
- (void)setHasBeenUnlockedSinceLastCheckIn:(bool)arg1;
- (void)setHousingColor:(id)arg1;
- (void)setLinkType:(unsigned long long)arg1;
- (void)setLocale:(id)arg1;
- (void)setMLBSerialNumber:(id)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setROMAddress:(id)arg1;
- (void)setServerFriendlyDescription:(id)arg1;
- (void)setUniqueDeviceIdentifier:(id)arg1;
- (id)uniqueDeviceIdentifier;
- (id)userChosenName;

@end