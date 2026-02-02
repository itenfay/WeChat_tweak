//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol WCFiderEidtMusicPostingAudioAdapterDelegate;

@interface WCFiderEidtMusicPostingAudioAdapter : NSObject
{
    id <WCFiderEidtMusicPostingAudioAdapterDelegate> _delegate;
    NSMutableDictionary *_videoMapAudioUrls;
}

+ (id)adapterWithDelegate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *videoMapAudioUrls; // @synthesize videoMapAudioUrls=_videoMapAudioUrls;
@property(nonatomic) __weak id <WCFiderEidtMusicPostingAudioAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchDataItemMediaAudioUrl:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

