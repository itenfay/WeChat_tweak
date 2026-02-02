//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FBSDKCodelessParameterComponent : NSObject
{
    NSString *_name;
    NSString *_value;
    NSArray *_path;
    NSString *_pathType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *pathType; // @synthesize pathType=_pathType;
@property(readonly, nonatomic) NSArray *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithJSON:(id)arg1;

@end

