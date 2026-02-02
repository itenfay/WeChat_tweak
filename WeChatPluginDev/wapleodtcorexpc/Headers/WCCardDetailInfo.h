//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WCCardDetailInfo
{
    NSString *_detailTitle;
    NSString *_detailDesc;
    NSString *_detailUrl;
    NSArray *_detailImgList;
    NSString *_detailAdTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *detailAdTitle; // @synthesize detailAdTitle=_detailAdTitle;
@property(retain, nonatomic) NSArray *detailImgList; // @synthesize detailImgList=_detailImgList;
@property(retain, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(retain, nonatomic) NSString *detailDesc; // @synthesize detailDesc=_detailDesc;
@property(retain, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;

@end

