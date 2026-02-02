//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WCMomentsPageContext;

@interface WCCellGroupItem : NSObject
{
    long long m_type;
    NSMutableArray *m_arrPhotoDatas;
    long long m_year;
    NSString *m_nsTip;
    NSString *m_nsSubTip;
    _Bool _isStarEnabled;
    long long _accessoryType;
    long long _accessoryContentType;
    WCMomentsPageContext *_pageContext;
}

+ (long long)groupTypeForDataItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isStarEnabled; // @synthesize isStarEnabled=_isStarEnabled;
@property(retain, nonatomic) WCMomentsPageContext *pageContext; // @synthesize pageContext=_pageContext;
@property(nonatomic) long long accessoryContentType; // @synthesize accessoryContentType=_accessoryContentType;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(retain, nonatomic) NSString *m_nsSubTip; // @synthesize m_nsSubTip;
@property(retain, nonatomic) NSString *m_nsTip; // @synthesize m_nsTip;
@property(nonatomic) long long m_year; // @synthesize m_year;
@property(retain, nonatomic) NSMutableArray *m_arrPhotoDatas; // @synthesize m_arrPhotoDatas;
@property(nonatomic) long long m_type; // @synthesize m_type;
- (id)cellViewClassName;
- (id)cellIdentifier;
- (_Bool)isSomeWCDataItemUnsafe;
- (id)init;

@end

