//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface WCFinderCommonEduTipsActionSheetConfig : NSObject
{
    UIImage *_iconImage;
    NSString *_title;
    NSString *_desc;
    NSString *_ruleContent;
    NSString *_cancelContent;
    NSString *_acceptContent;
    NSString *_trailContent;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *trailContent; // @synthesize trailContent=_trailContent;
@property(copy, nonatomic) NSString *acceptContent; // @synthesize acceptContent=_acceptContent;
@property(copy, nonatomic) NSString *cancelContent; // @synthesize cancelContent=_cancelContent;
@property(copy, nonatomic) NSString *ruleContent; // @synthesize ruleContent=_ruleContent;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;

@end

