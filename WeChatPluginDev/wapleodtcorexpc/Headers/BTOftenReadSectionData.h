//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTOftenReadBarViewCell, MPChannelTopBarInfo, NSArray, NSString;

@interface BTOftenReadSectionData
{
    NSArray *_itemViewModelArr;
    BTOftenReadBarViewCell *_barCellView;
    NSArray *_brandContactArr;
    MPChannelTopBarInfo *_channelInfo;
    NSString *_forcePreposedUsername;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *forcePreposedUsername; // @synthesize forcePreposedUsername=_forcePreposedUsername;
@property(retain, nonatomic) MPChannelTopBarInfo *channelInfo; // @synthesize channelInfo=_channelInfo;
@property(retain, nonatomic) NSArray *brandContactArr; // @synthesize brandContactArr=_brandContactArr;
@property(nonatomic) __weak BTOftenReadBarViewCell *barCellView; // @synthesize barCellView=_barCellView;
@property(retain, nonatomic) NSArray *itemViewModelArr; // @synthesize itemViewModelArr=_itemViewModelArr;
- (unsigned int)brandWithGreenDotCount;
- (unsigned int)brandCount;
- (_Bool)hasOftenReadContact;
- (_Bool)hasVideoChannel;
- (id)getChannelInfo;
- (id)genBrandBarItemViewModelWithContact:(id)arg1;
- (id)getPreposedContact;
- (void)initItemViewModelList;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (unsigned long long)sectionType;
- (void)updateWithChannelInfo:(id)arg1;
- (void)updateWithOftenReadContactArr:(id)arg1 channelInfo:(id)arg2 forcePreposeUsername:(id)arg3;
- (id)initWithSectionWidth:(double)arg1 oftenReadContactArr:(id)arg2 channelInfo:(id)arg3 forcePreposeUsername:(id)arg4;

@end

