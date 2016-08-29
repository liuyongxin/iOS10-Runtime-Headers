/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLMediaItemViewController : QLScrollableContentItemViewController <QLToolbarButtonAction> {
    double  _elapsedTime;
    NSError * _error;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    bool  _isFullScreen;
    bool  _isVisible;
    double  _mediaDuration;
    double  _mediaVolume;
    bool  _mediaWasPausedOnResignActive;
    bool  _playable;
    long long  _playbackTimeFormat;
    NSTimer * _playbackTimeHiddenTimer;
    NSObject * _playbackTimeObserver;
    AVPlayer * _player;
    AVPlayerLayer * _playerLayer;
    UIView * _playerView;
    bool  _playing;
    long long  _playingStatus;
    id /* block */  _previewItemLoadingBlock;
    double  _remainingTime;
    UIScrollView * _scrubberScrollView;
    UILabel * _timeLabel;
    UIView * _timeLabelBackground;
    NSLayoutConstraint * _timeLabelConstraintX;
    NSLayoutConstraint * _timeLabelConstraintY;
    bool  _visualTracksEnabled;
}

@property (nonatomic) double currentPlaybackHeadPosition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double elapsedTime;
@property (nonatomic, readonly) bool endOfMediaReached;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic) double mediaDuration;
@property (nonatomic, readonly) double mediaVolume;
@property (nonatomic, readonly) bool playable;
@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (nonatomic, readonly) UIView *playerView;
@property (nonatomic, readonly) long long playingStatus;
@property (nonatomic) double remainingTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool visualTracksEnabled;

- (void).cxx_destruct;
- (void)_updateExternalPlayback;
- (void)_updatePlayingStatus;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)buttonPressedWithIdentifier:(id)arg1;
- (double)currentPlaybackHeadPosition;
- (void)dealloc;
- (void)didChangePlayingStatus;
- (void)didReachEndOfMedia;
- (double)elapsedTime;
- (bool)endOfMediaReached;
- (id)error;
- (void)hideTimeLabel;
- (void)hideTimeLabelAfterDelay;
- (void)hideTimeLabelAnimated:(bool)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)labelTextWithFormat:(long long)arg1 elapsedInterval:(double)arg2 remainingInterval:(double)arg3;
- (void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (double)mediaDuration;
- (double)mediaVolume;
- (void)observePlayingTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause;
- (void)play;
- (bool)playable;
- (id)player;
- (void)playerItemDidReachEnd:(id)arg1;
- (id)playerLayer;
- (id)playerView;
- (long long)playingStatus;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (id)registeredKeyCommands;
- (double)remainingTime;
- (void)removeTimeLabel;
- (void)resetToBeginning;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setCurrentPlaybackHeadPosition:(double)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)setError:(id)arg1;
- (void)setMediaDuration:(double)arg1;
- (void)setMediaVolume:(double)arg1;
- (void)setRemainingTime:(double)arg1;
- (void)setTimeLabelNeedsUpdate;
- (void)setUpTimeLabelIfNeeded;
- (bool)shouldPauseOnDisappear;
- (void)showTimeLabel;
- (void)showTimeLabelIfNeeded;
- (void)stop;
- (id)stringFromTimeInterval:(double)arg1;
- (id)timeLabelScrollView;
- (void)togglePlayback;
- (id)toolbarButtons;
- (void)transitionDidFinish:(bool)arg1 didComplete:(bool)arg2;
- (bool)visualTracksEnabled;

@end