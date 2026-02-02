//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FlutterActionBarTitleConfig : NSObject
{
    NSString *_text;
    NSNumber *_color;
    NSString *_subTitile;
    NSNumber *_subTitleColor;
}

+ (id)fromMap:(id)arg1;
+ (id)makeWithText:(id)arg1 color:(id)arg2 subTitile:(id)arg3 subTitleColor:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *subTitleColor; // @synthesize subTitleColor=_subTitleColor;
@property(copy, nonatomic) NSString *subTitile; // @synthesize subTitile=_subTitile;
@property(retain, nonatomic) NSNumber *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)toMap;

@end

