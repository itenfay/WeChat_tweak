//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavLocationItem, FavoritesItemDataField, NSString;

@interface WNTextAttachment
{
    unsigned int _headIndex;
    unsigned int _audioOffsetMs;
}

@property(nonatomic) unsigned int audioOffsetMs; // @synthesize audioOffsetMs=_audioOffsetMs;
@property(nonatomic) unsigned int headIndex; // @synthesize headIndex=_headIndex;
- (id)accessibilityLabel;
@property(retain, nonatomic) FavLocationItem *locationInfo;
@property(nonatomic) unsigned int voiceFmt;
@property(retain, nonatomic) NSString *dataFmt;
@property(nonatomic) unsigned int dataDuration;
@property(nonatomic) _Bool isSmallImage;
@property(nonatomic) unsigned long long dataSize;
@property(retain, nonatomic) NSString *dataPath;
@property(nonatomic) unsigned int thumbSize;
@property(retain, nonatomic) NSString *thumbPath;
@property(nonatomic) _Bool checked;
@property(nonatomic) unsigned int listIndex;
@property(retain, nonatomic) NSString *dataTitle;
@property(retain, nonatomic) NSString *objectId;
@property(readonly, nonatomic) FavoritesItemDataField *favData;
- (void)configFrameWithWidth:(double)arg1;

@end

