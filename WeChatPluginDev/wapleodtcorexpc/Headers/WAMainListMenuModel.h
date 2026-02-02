//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class GetWxaDesktopEntranceResponse_EntranceInfo, NSString, TipsShowInfo, UIImage;

@interface WAMainListMenuModel : NSObject
{
    NSString *_title;
    UIImage *_iconImage;
    NSString *_badge;
    GetWxaDesktopEntranceResponse_EntranceInfo *_entranceInfo;
    TipsShowInfo *_tipsInfo;
}

+ (id)createWithIcon:(id)arg1 title:(id)arg2 entranceInfo:(id)arg3;
+ (id)createWithIcon:(id)arg1 title:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TipsShowInfo *tipsInfo; // @synthesize tipsInfo=_tipsInfo;
@property(retain, nonatomic) GetWxaDesktopEntranceResponse_EntranceInfo *entranceInfo; // @synthesize entranceInfo=_entranceInfo;
@property(retain, nonatomic) NSString *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

