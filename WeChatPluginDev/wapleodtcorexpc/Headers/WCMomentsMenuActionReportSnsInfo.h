//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCMomentsMenuActionReportSnsInfo
{
    int _feedType;
    long long _contentType;
    NSString *_feedId;
    NSString *_feedUsername;
    NSString *_commentUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *commentUsername; // @synthesize commentUsername=_commentUsername;
@property(retain, nonatomic) NSString *feedUsername; // @synthesize feedUsername=_feedUsername;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;

@end

