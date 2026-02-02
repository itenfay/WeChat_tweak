//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface WCFinderJumpInfoCommentEnhanceBubbleViewModel : NSObject
{
    NSString *_descriptionText;
    NSString *_linkText;
    UIColor *_backgroundColor;
    UIColor *_descriptionTextColor;
    UIColor *_linkTextColor;
}

+ (id)modelWithData:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;

@end

