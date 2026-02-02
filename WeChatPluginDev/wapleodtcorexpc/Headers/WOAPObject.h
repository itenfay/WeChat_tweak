//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WOAPObject : NSObject
{
    long long _objType;
    NSString *_appId;
}

@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) long long objType; // @synthesize objType=_objType;

@end

