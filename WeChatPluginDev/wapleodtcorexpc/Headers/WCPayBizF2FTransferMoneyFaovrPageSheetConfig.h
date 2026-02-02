//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BusiF2FFavorCommResp, NSArray, NSString;

@interface WCPayBizF2FTransferMoneyFaovrPageSheetConfig : NSObject
{
    NSString *_title;
    BusiF2FFavorCommResp *_favorResp;
    NSArray *_selectedArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *selectedArray; // @synthesize selectedArray=_selectedArray;
@property(retain, nonatomic) BusiF2FFavorCommResp *favorResp; // @synthesize favorResp=_favorResp;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

