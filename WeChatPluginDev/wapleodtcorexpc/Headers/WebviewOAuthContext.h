//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, WAAuthorizeResultInfo;

@interface WebviewOAuthContext
{
    NSArray *_scopeList;
    WAAuthorizeResultInfo *_resultInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WAAuthorizeResultInfo *resultInfo; // @synthesize resultInfo=_resultInfo;
@property(retain, nonatomic) NSArray *scopeList; // @synthesize scopeList=_scopeList;

@end

