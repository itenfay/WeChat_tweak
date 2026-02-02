//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WSContactSearchLogicDelegate;

@interface WSContactSearchLogic : NSObject
{
    unsigned int _bussinessType;
    id <WSContactSearchLogicDelegate> _delegate;
    NSString *_newestQueryText;
    NSString *_taskKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *taskKey; // @synthesize taskKey=_taskKey;
@property(nonatomic) unsigned int bussinessType; // @synthesize bussinessType=_bussinessType;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(nonatomic) __weak id <WSContactSearchLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onFTSContactSearchFinish:(id)arg1;
- (void)delaySearchImp:(id)arg1;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)handleTextChanged:(id)arg1;
- (void)cancelSearch;
- (void)dealloc;
- (id)initWithBussinessType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

