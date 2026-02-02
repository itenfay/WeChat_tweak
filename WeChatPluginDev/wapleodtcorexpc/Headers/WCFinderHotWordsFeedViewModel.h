//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSString, WCFinderHotWordsTriggerInfo;
@protocol WCFinderHotWordsFeedViewModelDelegate;

@interface WCFinderHotWordsFeedViewModel : NSObject
{
    int _scene;
    int _streamScene;
    id <WCFinderHotWordsFeedViewModelDelegate> _delegate;
    unsigned long long _state;
    unsigned long long _refreshTime;
    WCFinderHotWordsTriggerInfo *_triggerInfo;
    NSMutableArray *_mutableContentVMS;
    NSData *_lastBuff;
    NSString *_dataScene;
}

- (void).cxx_destruct;
@property(nonatomic) int streamScene; // @synthesize streamScene=_streamScene;
@property(retain, nonatomic) NSString *dataScene; // @synthesize dataScene=_dataScene;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) NSMutableArray *mutableContentVMS; // @synthesize mutableContentVMS=_mutableContentVMS;
@property(retain, nonatomic) WCFinderHotWordsTriggerInfo *triggerInfo; // @synthesize triggerInfo=_triggerInfo;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <WCFinderHotWordsFeedViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)listViewModelWithScene:(int)arg1 dataScene:(id)arg2;
@property(readonly, nonatomic) _Bool canLoadMore;
- (_Bool)couldFetchNextPage;
- (void)appendDataItem:(id)arg1;
- (void)requestNextPage;
- (void)requestFirstPage;
@property(readonly, nonatomic) NSString *displayTitle;
@property(readonly, nonatomic) NSArray *contentVMS;
- (id)init;
- (id)initWithTriggerInfo:(id)arg1 commentScene:(int)arg2 dataScene:(id)arg3 streamScene:(int)arg4;

@end

