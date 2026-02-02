//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface KFContactReqInfo : NSObject
{
    unsigned int _kfType;
    NSString *_kfOpenId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int kfType; // @synthesize kfType=_kfType;
@property(retain, nonatomic) NSString *kfOpenId; // @synthesize kfOpenId=_kfOpenId;

@end

