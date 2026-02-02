//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMFinderHandOffItem
{
    NSString *_icon;
    NSString *_objectId;
    NSString *_objectNonceId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *objectNonceId; // @synthesize objectNonceId=_objectNonceId;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

