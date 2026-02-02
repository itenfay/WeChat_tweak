//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class COpenIMCustomToolBarItem, NSString;

@interface WWKFReportFlowActionExtInfo
{
    long long _shareScene;
    NSString *_shareToUser;
    NSString *_finderUserName;
    COpenIMCustomToolBarItem *_customToolBarItem;
    NSString *_chatSessionId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *chatSessionId; // @synthesize chatSessionId=_chatSessionId;
@property(copy, nonatomic) COpenIMCustomToolBarItem *customToolBarItem; // @synthesize customToolBarItem=_customToolBarItem;
@property(copy, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(copy, nonatomic) NSString *shareToUser; // @synthesize shareToUser=_shareToUser;
@property(nonatomic) long long shareScene; // @synthesize shareScene=_shareScene;

@end

