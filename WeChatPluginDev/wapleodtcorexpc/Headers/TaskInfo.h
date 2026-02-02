//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface TaskInfo : NSObject
{
    _Bool _bIsPresented;
    double taskAddTime;
    NSString *taskBizKey;
}

@property(nonatomic) _Bool bIsPresented; // @synthesize bIsPresented=_bIsPresented;
@property(retain, nonatomic) NSString *taskBizKey; // @synthesize taskBizKey;
@property(nonatomic) double taskAddTime; // @synthesize taskAddTime;

@end

