//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableAttributedString, NSString;

@interface MMFinderLiveFansGroupNoticeVisibilityItem : NSObject
{
    _Bool _selected;
    _Bool _expandable;
    _Bool _expanded;
    int _visibility;
    NSString *_title;
    NSMutableAttributedString *_attrSubtitle;
    Class _cellCls;
    MMFinderLiveFansGroupNoticeVisibilityItem *_expandLinkedItem;
}

+ (id)itemWithTitle:(id)arg1 subtitle:(id)arg2 visibility:(int)arg3 cellCls:(Class)arg4;
- (void).cxx_destruct;
@property(nonatomic) int visibility; // @synthesize visibility=_visibility;
@property(nonatomic) __weak MMFinderLiveFansGroupNoticeVisibilityItem *expandLinkedItem; // @synthesize expandLinkedItem=_expandLinkedItem;
@property(retain, nonatomic) Class cellCls; // @synthesize cellCls=_cellCls;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) _Bool expandable; // @synthesize expandable=_expandable;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSMutableAttributedString *attrSubtitle; // @synthesize attrSubtitle=_attrSubtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

