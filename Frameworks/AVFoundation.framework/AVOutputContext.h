/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputContext : NSObject <NSSecureCoding> {
    AVOutputContextInternal * _outputContext;
}

@property (nonatomic, readonly) NSString *deviceName;

+ (struct OpaqueFigEndpointPicker { }*)copySystemVideoPicker;
+ (id)iTunesAudioContext;
+ (id)outputContext;
+ (bool)outputContextExistsWithRemoteOutputDevice;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (bool)supportsSecureCoding;

- (void)_addFigEndpointPickerNotifications;
- (int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1 options:(id)arg2;
- (void)_handlePickerServerConnectionDiedNotification;
- (void)_removeFigEndpointPickerNotifications;
- (id)_weakReference;
- (int)applicationProcessID;
- (id)associatedAudioDeviceID;
- (id)contextUUID;
- (void)dealloc;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextUUID:(id)arg1;
- (id)initWithFeature:(unsigned long long)arg1 options:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)outputDevice;
- (void)setApplicationProcessID:(int)arg1;
- (bool)setOutputDevice:(id)arg1 forFeatures:(unsigned long long)arg2;

@end
