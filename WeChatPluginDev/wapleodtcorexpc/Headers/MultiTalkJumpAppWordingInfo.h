//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MultiTalkJumpAppWordingInfo : NSObject
{
    NSString *_name;
    NSString *_dialogTitle;
    NSString *_dialogGotoButtonTitle;
    NSString *_bannerTitle;
    NSString *_bannerContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bannerContent; // @synthesize bannerContent=_bannerContent;
@property(retain, nonatomic) NSString *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
@property(retain, nonatomic) NSString *dialogGotoButtonTitle; // @synthesize dialogGotoButtonTitle=_dialogGotoButtonTitle;
@property(retain, nonatomic) NSString *dialogTitle; // @synthesize dialogTitle=_dialogTitle;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithDic:(id)arg1;

@end

