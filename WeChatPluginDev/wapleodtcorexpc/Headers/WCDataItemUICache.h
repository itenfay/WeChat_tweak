//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, WCDataItem;

@interface WCDataItemUICache : NSObject
{
    WCDataItem *m_dataItem;
    NSMutableDictionary *m_dicLayerIdShowTipView;
    _Bool m_isShowDetail;
    struct unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_contentDescHeight;
    struct unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_contentDescFoldHeight;
    struct unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_contentDescLayoutStyles[4];
    struct unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_likeUserHeight;
    struct unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_likeUserLayoutStyles;
    struct unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_springContentDescHeight;
    struct unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_springContentDescFoldHeight;
    struct unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_springContentDescLayoutStyles[4];
    struct unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_springLikeUserHeight;
    struct unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_springLikeUserLayoutStyles;
    NSMutableArray *_usersHasUnreadStory;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *usersHasUnreadStory; // @synthesize usersHasUnreadStory=_usersHasUnreadStory;
@property(retain, nonatomic) NSMutableDictionary *dicLayerIdShowTipView; // @synthesize dicLayerIdShowTipView=m_dicLayerIdShowTipView;
@property(nonatomic) _Bool isShowDetail; // @synthesize isShowDetail=m_isShowDetail;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=m_dataItem;
- (_Bool)isSpringCacheEmpty;
- (void)clearSpringCache;
- (void *)springLikeUserLayoutStyles;
- (void *)springLikeUserHeight;
- (void *)springContentDescLayoutStyles;
- (void *)springContentDescFoldHeight;
- (void *)springContentDescHeight;
- (void)dealloc;
- (_Bool)isEmpty;
- (void *)likeUserLayoutStyles;
- (void *)likeUserHeight;
- (void *)contentDescLayoutStyles;
- (void *)contentDescFoldHeight;
- (void *)contentDescHeight;

@end

