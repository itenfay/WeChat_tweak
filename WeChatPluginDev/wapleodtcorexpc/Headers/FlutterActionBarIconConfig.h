//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FlutterActionBarIconConfig : NSObject
{
    NSNumber *_iconId;
    NSNumber *_type;
    NSNumber *_iconColor;
    NSString *_text;
}

+ (id)fromMap:(id)arg1;
+ (id)makeWithIconId:(id)arg1 type:(id)arg2 iconColor:(id)arg3 text:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSNumber *iconColor; // @synthesize iconColor=_iconColor;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *iconId; // @synthesize iconId=_iconId;
- (id)toMap;

@end

