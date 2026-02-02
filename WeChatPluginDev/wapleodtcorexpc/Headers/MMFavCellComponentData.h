//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFavBaselineComponentData, MMFavImageComponentData, MMFavTextComponentData, NSArray;

@interface MMFavCellComponentData
{
    _Bool _onlyImageOrVideo;
    MMFavBaselineComponentData *m_baselineComData;
    MMFavImageComponentData *m_imageComData;
    MMFavTextComponentData *m_textComData;
    NSArray *m_imageComDataArr;
    long long _favType;
    unsigned long long _cellStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) _Bool onlyImageOrVideo; // @synthesize onlyImageOrVideo=_onlyImageOrVideo;
@property(nonatomic) long long favType; // @synthesize favType=_favType;
@property(retain, nonatomic) NSArray *m_imageComDataArr; // @synthesize m_imageComDataArr;
@property(retain, nonatomic) MMFavTextComponentData *m_textComData; // @synthesize m_textComData;
@property(retain, nonatomic) MMFavImageComponentData *m_imageComData; // @synthesize m_imageComData;
@property(retain, nonatomic) MMFavBaselineComponentData *m_baselineComData; // @synthesize m_baselineComData;
- (id)init;

@end

