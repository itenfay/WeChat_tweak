//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CommitBindXmailRequest, MMUIViewController, NSString, XMailSecondPasswordInputViewController;
@protocol XMailCommitBindCgiDelegate;

@interface XMailCommitBindCgi
{
    XMailSecondPasswordInputViewController *m_secPwdInputVC;
    MMUIViewController *_rootViewController;
    id <XMailCommitBindCgiDelegate> _delegate;
    NSString *_secPwdKey;
    CommitBindXmailRequest *_commitBindRequest;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CommitBindXmailRequest *commitBindRequest; // @synthesize commitBindRequest=_commitBindRequest;
@property(retain, nonatomic) NSString *secPwdKey; // @synthesize secPwdKey=_secPwdKey;
@property(nonatomic) __weak id <XMailCommitBindCgiDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak MMUIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (_Bool)internalStartBindMailWithRequest:(id)arg1;
- (id)currentViewController;
- (_Bool)openSecPwdInputViewController;
- (_Bool)startBindMailFromWXMailWithMailAddr:(id)arg1;
- (_Bool)startBindWithSecPwd:(id)arg1;
- (void)prepareBindMailFromMailAddr:(id)arg1 ticket:(id)arg2;
- (void)prepareBindMailFromBindedQQ;
- (id)init;

@end

