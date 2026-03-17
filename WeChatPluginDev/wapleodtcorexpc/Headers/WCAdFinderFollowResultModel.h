//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCAdFinderFollowResultModel : NSObject
{
    int _source;
    NSString *_finderUsername;
    long long _result;
}

@property(nonatomic) int source; // @synthesize source=_source;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;

@end

