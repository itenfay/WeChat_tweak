//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface FavTVItem
{
    NSString *_tvTitle;
    NSString *_tvDesc;
    NSString *_thumbUrl;
    NSString *_tvInfo;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tvInfo; // @synthesize tvInfo=_tvInfo;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *tvDesc; // @synthesize tvDesc=_tvDesc;
@property(retain, nonatomic) NSString *tvTitle; // @synthesize tvTitle=_tvTitle;

@end

