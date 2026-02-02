//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderContact, WCFinderFeedContentVM;
@protocol WCFinderPhotoFeedDetailViewModelDelegate;

@interface WCFinderPhotoFeedDetailViewModel : NSObject
{
    _Bool _isPhotoFeed;
    int _scene;
    int _customScene;
    id <WCFinderPhotoFeedDetailViewModelDelegate> _delegate;
    WCFinderFeedContentVM *_contentVM;
    unsigned long long _commentScene;
    unsigned long long _commentSwitchType;
    WCFinderContact *_finderContact;
    NSString *_encryptedTid;
    NSString *_tid;
    NSString *_nonceID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPhotoFeed; // @synthesize isPhotoFeed=_isPhotoFeed;
@property(copy, nonatomic) NSString *nonceID; // @synthesize nonceID=_nonceID;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *encryptedTid; // @synthesize encryptedTid=_encryptedTid;
@property(nonatomic) int customScene; // @synthesize customScene=_customScene;
@property(retain, nonatomic) WCFinderContact *finderContact; // @synthesize finderContact=_finderContact;
@property(nonatomic) unsigned long long commentSwitchType; // @synthesize commentSwitchType=_commentSwitchType;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) __weak id <WCFinderPhotoFeedDetailViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isSelfPostFeed;
- (void)updateLocalDataItem:(CDUnknownBlockType)arg1;
- (void)_handleAsyncFetchError:(int)arg1 msg:(id)arg2;
- (void)asyncFetchDataItemWithCompletion:(CDUnknownBlockType)arg1;
- (id)dataItem;
- (void)setupWithDataItem:(id)arg1;
- (void)setupInitState;
- (void)startToLoadDataItem;
- (id)initWithTid:(id)arg1 encryptedTid:(id)arg2 nonceID:(id)arg3 customScene:(int)arg4;
- (id)initWithEncryptedTid:(id)arg1 nonceID:(id)arg2 customScene:(int)arg3;
- (id)initWithTid:(id)arg1 nonceID:(id)arg2 customScene:(int)arg3;

@end

