//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedArray;
@protocol WCFinderProfileFeedManagerDelegate;

@interface WCFinderProfileFeedManager : NSObject
{
    id <WCFinderProfileFeedManagerDelegate> _delegate;
    NSString *_username;
    WCFinderFeedArray *_feedArray;
    CDUnknownBlockType _feedMap;
}

+ (id)managerWithFeedArray:(id)arg1 isAuthor:(_Bool)arg2 username:(id)arg3 feedMap:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType feedMap; // @synthesize feedMap=_feedMap;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) __weak id <WCFinderProfileFeedManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFinderDataItemDelete:(id)arg1;
- (_Bool)insertPostDataItem:(id)arg1 tid:(id)arg2;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

