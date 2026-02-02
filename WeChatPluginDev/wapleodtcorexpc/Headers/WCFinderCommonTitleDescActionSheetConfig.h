//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderCommonTitleDescActionSheetConfig : NSObject
{
    NSString *_titleContent;
    NSString *_descContent;
    unsigned long long _iconStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long iconStyle; // @synthesize iconStyle=_iconStyle;
@property(copy, nonatomic) NSString *descContent; // @synthesize descContent=_descContent;
@property(copy, nonatomic) NSString *titleContent; // @synthesize titleContent=_titleContent;

@end

