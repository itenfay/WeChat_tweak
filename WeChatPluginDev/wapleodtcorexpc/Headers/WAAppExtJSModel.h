//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAAppExtJSModel
{
    unsigned int _downloadCostTimeInMs;
    unsigned long long _target;
    unsigned long long _timing;
    NSString *_jsContent;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *jsContent; // @synthesize jsContent=_jsContent;
@property(nonatomic) unsigned int downloadCostTimeInMs; // @synthesize downloadCostTimeInMs=_downloadCostTimeInMs;
@property(nonatomic) unsigned long long timing; // @synthesize timing=_timing;
@property(nonatomic) unsigned long long target; // @synthesize target=_target;

@end

