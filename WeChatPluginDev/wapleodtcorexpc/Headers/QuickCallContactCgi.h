//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray;
@protocol QuickCallContactCgiDelegate;

@interface QuickCallContactCgi
{
    _Bool _isRunning;
    _Bool _isAddContact;
    id <QuickCallContactCgiDelegate> _delegate;
    CDUnknownBlockType _completion;
    NSMutableArray *_waitingUsernames;
    NSMutableArray *_successUsernames;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *successUsernames; // @synthesize successUsernames=_successUsernames;
@property(retain, nonatomic) NSMutableArray *waitingUsernames; // @synthesize waitingUsernames=_waitingUsernames;
@property(nonatomic) _Bool isAddContact; // @synthesize isAddContact=_isAddContact;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) __weak id <QuickCallContactCgiDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)isEmpty;
- (void)handleFinishCallback;
- (void)checkQueue;
- (void)startRemoveContacts:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)startAddContacts:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)init;

@end

