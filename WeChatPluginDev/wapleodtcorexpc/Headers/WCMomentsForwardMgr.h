//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString;

@interface WCMomentsForwardMgr
{
    NSMutableArray *_forwardArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *forwardArray; // @synthesize forwardArray=_forwardArray;
- (void)asyncRecordMicroMerchantForwardInteractionIfNeeded:(id)arg1;
- (void)onMomentsForwardOpDidCancel:(id)arg1;
- (void)onMomentsForwardOpDidSend:(id)arg1;
- (void)startForward:(id)arg1 toCustomContact:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

