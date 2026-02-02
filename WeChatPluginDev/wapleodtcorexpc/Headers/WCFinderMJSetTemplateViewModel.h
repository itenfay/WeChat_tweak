//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ForwardMessageLogicController, NSArray, NSMutableArray, NSString, WCFinderMJSetInitParams, WCFinderMJTempInfo;
@protocol WCFinderMJSetTemplateViewModelDelegate;

@interface WCFinderMJSetTemplateViewModel : NSObject
{
    id <WCFinderMJSetTemplateViewModelDelegate> _delegate;
    WCFinderMJTempInfo *_mjTempInfo;
    NSString *_topicId;
    NSMutableArray *_mutTabs;
    ForwardMessageLogicController *_forwardLogic;
    WCFinderMJSetInitParams *_params;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderMJSetInitParams *params; // @synthesize params=_params;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) NSMutableArray *mutTabs; // @synthesize mutTabs=_mutTabs;
@property(copy, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(retain, nonatomic) WCFinderMJTempInfo *mjTempInfo; // @synthesize mjTempInfo=_mjTempInfo;
@property(nonatomic) __weak id <WCFinderMJSetTemplateViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (long long)genShareMomentType;
- (unsigned long long)genFinderShareItemType;
- (void)shareToMoment:(id)arg1;
- (void)shareToFriend:(id)arg1;
- (void)requestTabs;
@property(readonly, nonatomic) NSArray *tabs;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

