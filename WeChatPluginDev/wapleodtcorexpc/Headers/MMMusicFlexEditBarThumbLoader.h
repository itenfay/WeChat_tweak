//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol MMMusicFlexEditBarThumbLoaderDelegate;

@interface MMMusicFlexEditBarThumbLoader : NSObject
{
    NSArray *_arrTrackItem;
    NSMutableDictionary *_dictThumbInfo;
    id <MMMusicFlexEditBarThumbLoaderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMMusicFlexEditBarThumbLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (void)retriveThumbImageAtTrackIndex:(unsigned int)arg1 timeSec:(double)arg2 blockOnGetThumbImage:(CDUnknownBlockType)arg3;
- (void)loadThumb:(id)arg1;
- (void)reloadWithTrackItems:(id)arg1 needReloadThumbData:(_Bool)arg2;
- (void)loadData;
- (id)initWithArrTrackItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

