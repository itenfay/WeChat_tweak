//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCAdHeadStateInfo, WCAdURLImageView, WCDataItem;

@interface WCAdHeadStateView
{
    WCAdURLImageView *_headStateImageView;
    WCDataItem *_dataItem;
    WCAdHeadStateInfo *_stateInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdHeadStateInfo *stateInfo; // @synthesize stateInfo=_stateInfo;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(retain, nonatomic) WCAdURLImageView *headStateImageView; // @synthesize headStateImageView=_headStateImageView;
- (void)onAdHeadReadStateChanged;
- (void)dealloc;
- (void)updateHeadState;
- (void)setupUI;
- (id)initWithDataItem:(id)arg1 stateInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

