//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class FavoritesItemDataField, NSObject, UIColor;
@protocol NSCopying;

@interface RTEAttributeNode
{
    _Bool _effective;
    unsigned int _listType;
    unsigned int _nodeType;
    NSObject<NSCopying> *_attributeInfo;
}

+ (id)creatEmptyNote:(unsigned int)arg1 Length:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<NSCopying> *attributeInfo; // @synthesize attributeInfo=_attributeInfo;
@property(nonatomic) _Bool effective; // @synthesize effective=_effective;
@property(nonatomic) unsigned int nodeType; // @synthesize nodeType=_nodeType;
@property(nonatomic) unsigned int listType; // @synthesize listType=_listType;
- (id)preAttributeNode;
- (id)nextAttributeNode;
- (_Bool)canBeMergedInto:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)configWithHr;
- (void)configWithLocation:(id)arg1;
- (void)configWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configWithFilePath:(id)arg1 fileName:(id)arg2;
- (void)configWithVideoPath:(id)arg1 thumbPath:(id)arg2 duration:(unsigned int)arg3;
- (void)configWithGifData:(id)arg1;
- (void)configWithImage:(id)arg1;
- (_Bool)isListContentAttribute;
- (_Bool)isListPrefixAttribute;
- (_Bool)isOrderListPrefixAttribute;
- (_Bool)isGifAttribute;
- (void)changeImage:(id)arg1;
@property(readonly, nonatomic) FavoritesItemDataField *favData;
@property(nonatomic) _Bool checked;
@property(retain, nonatomic) UIColor *fontColor;
@property(nonatomic) double fontSize;
@property(nonatomic) unsigned int listIndex;
- (void)forceSetListIndex:(unsigned int)arg1;
@property(nonatomic) unsigned int headIndex;

@end

