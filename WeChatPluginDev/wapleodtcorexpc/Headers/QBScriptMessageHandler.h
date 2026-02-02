//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol QBScriptMessageHandlerDelegate;

@interface QBScriptMessageHandler : NSObject
{
    id <QBScriptMessageHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <QBScriptMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

