//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, TXCVideoFrameCoords;
@protocol TXCVideoPreprocessSupervisorDelegate;

@interface TXCVideoPreprocessSupervisor : NSObject
{
    NSArray *_supervisorPropertyKVOKeys;
    NSArray *_frameCoordsPropertyKVOKeys;
    _Bool _skipPreprocess;
    _Bool _beautyFilterEnabled;
    _Bool _lutFilterEnabled;
    _Bool _customFilterEnabled;
    _Bool _roiRegionTransformFilterEnabled;
    _Bool _watermarkFilterEnabled;
    unsigned int _inputFormat;
    TXCVideoFrameCoords *_frameCoords;
    id <TXCVideoPreprocessSupervisorDelegate> _delegate;
    unsigned long long _encoderFeatures;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long encoderFeatures; // @synthesize encoderFeatures=_encoderFeatures;
@property(nonatomic) unsigned int inputFormat; // @synthesize inputFormat=_inputFormat;
@property(nonatomic) _Bool watermarkFilterEnabled; // @synthesize watermarkFilterEnabled=_watermarkFilterEnabled;
@property(nonatomic) _Bool roiRegionTransformFilterEnabled; // @synthesize roiRegionTransformFilterEnabled=_roiRegionTransformFilterEnabled;
@property(nonatomic) _Bool customFilterEnabled; // @synthesize customFilterEnabled=_customFilterEnabled;
@property(nonatomic) _Bool lutFilterEnabled; // @synthesize lutFilterEnabled=_lutFilterEnabled;
@property(nonatomic) _Bool beautyFilterEnabled; // @synthesize beautyFilterEnabled=_beautyFilterEnabled;
@property(nonatomic) __weak id <TXCVideoPreprocessSupervisorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool skipPreprocess; // @synthesize skipPreprocess=_skipPreprocess;
- (void)updateStrategy;
- (_Bool)canSkipPreprocess;
- (_Bool)imageProcessingEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeFrameCoordsPropertyObserver;
- (void)removeSupervisorPropertyObserver;
- (void)addFrameCoordsPropertyObserver;
- (void)addSupervisorPropertyObserver;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) TXCVideoFrameCoords *frameCoords; // @synthesize frameCoords=_frameCoords;

@end

