//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCUserComment;

@interface WCUserCommentUICache : NSObject
{
    WCUserComment *m_userComment;
    struct unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_contentHeight;
    struct unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_userCommentLayoutStyles;
    struct unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_tigerContentHeight;
    struct unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_tigerContentLayoutStyles;
    struct unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_springIconContentHeight;
    struct unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_springIconContentLayoutStyles;
    struct unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_transContentHeight;
    struct unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_userTransCommentLayoutStyles;
    struct unordered_map<double, double, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, double>>> m_adSpecialContentHeight;
    struct unordered_map<double, NSMutableArray *, std::hash<double>, std::equal_to<double>, std::allocator<std::pair<const double, NSMutableArray *>>> m_adSpecialContentLayoutStyles;
    _Bool _userHasStory;
    _Bool _refHasStory;
    _Bool _isEmotionComment;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool isEmotionComment; // @synthesize isEmotionComment=_isEmotionComment;
@property(nonatomic) _Bool refHasStory; // @synthesize refHasStory=_refHasStory;
@property(nonatomic) _Bool userHasStory; // @synthesize userHasStory=_userHasStory;
@property(retain, nonatomic) WCUserComment *userComment; // @synthesize userComment=m_userComment;
- (void)dealloc;
- (_Bool)isEmpty;
- (void *)adSpecialContentLayoutStyles;
- (void *)adSpecialContentHeight;
- (void *)userTransCommentLayoutStyles;
- (void *)transContentHeight;
- (void *)springIconContentLayoutStyles;
- (void *)springIconContentHeight;
- (void *)tigerContentLayoutStyles;
- (void *)tigerContentHeight;
- (void *)userCommentLayoutStyles;
- (void *)contentHeight;

@end

