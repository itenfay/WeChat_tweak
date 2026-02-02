//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GCChatBaseCellLayoutInfo : NSObject
{
    double _roleWidthWithLeftSpace;
    double _compressedNameWidth;
    double _maxNameLineWidth;
    NSMutableDictionary *_contentInfoDict;
    struct CGSize _nameSize;
    struct CGSize _tagSize;
    struct CGSize _roleSize;
    struct CGSize _roleLabelSize;
    struct CGSize _bgSize;
    struct CGSize _innerContentSize;
    struct CGPoint _nameLineLabelOffset;
    struct UIEdgeInsets _innerContentInset;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint nameLineLabelOffset; // @synthesize nameLineLabelOffset=_nameLineLabelOffset;
@property(nonatomic) struct UIEdgeInsets innerContentInset; // @synthesize innerContentInset=_innerContentInset;
@property(nonatomic) struct CGSize innerContentSize; // @synthesize innerContentSize=_innerContentSize;
@property(retain, nonatomic) NSMutableDictionary *contentInfoDict; // @synthesize contentInfoDict=_contentInfoDict;
@property(nonatomic) struct CGSize bgSize; // @synthesize bgSize=_bgSize;
@property(nonatomic) double maxNameLineWidth; // @synthesize maxNameLineWidth=_maxNameLineWidth;
@property(nonatomic) double compressedNameWidth; // @synthesize compressedNameWidth=_compressedNameWidth;
@property(nonatomic) struct CGSize roleLabelSize; // @synthesize roleLabelSize=_roleLabelSize;
@property(nonatomic) struct CGSize roleSize; // @synthesize roleSize=_roleSize;
@property(nonatomic) double roleWidthWithLeftSpace; // @synthesize roleWidthWithLeftSpace=_roleWidthWithLeftSpace;
@property(nonatomic) struct CGSize tagSize; // @synthesize tagSize=_tagSize;
@property(nonatomic) struct CGSize nameSize; // @synthesize nameSize=_nameSize;
- (id)init;

@end

