//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString, QMapContext, QMediator, QStatisticer, QUniversalMapCounter;

@interface QStyleManager : NSObject
{
    QMediator *_mediator;
    QMapContext *_mapContext;
    QUniversalMapCounter *_universalCounter;
    QStatisticer *_styleStatisticer;
    NSString *_businessKey;
    NSString *_configDirectoryPath;
    NSString *_stylePlistPath;
    NSArray *_styleList;
    long long _styleOrder;
}

- (void).cxx_destruct;
@property(nonatomic) long long styleOrder; // @synthesize styleOrder=_styleOrder;
@property(retain, nonatomic) NSArray *styleList; // @synthesize styleList=_styleList;
@property(copy, nonatomic) NSString *stylePlistPath; // @synthesize stylePlistPath=_stylePlistPath;
@property(copy, nonatomic) NSString *configDirectoryPath; // @synthesize configDirectoryPath=_configDirectoryPath;
@property(copy, nonatomic) NSString *businessKey; // @synthesize businessKey=_businessKey;
@property(nonatomic) __weak QStatisticer *styleStatisticer; // @synthesize styleStatisticer=_styleStatisticer;
@property(nonatomic) __weak QUniversalMapCounter *universalCounter; // @synthesize universalCounter=_universalCounter;
@property(nonatomic) __weak QMapContext *mapContext; // @synthesize mapContext=_mapContext;
@property(nonatomic) __weak QMediator *mediator; // @synthesize mediator=_mediator;
- (void)setupStyleList;
- (void)setupStylePlist;
- (id)initWithConfigPreference:(id)arg1;
- (void)recordCustomStyleStats:(long long)arg1;
- (id)resolveStyleJSONList:(id)arg1;
- (void)resetMapStyleData;
- (void)updateMapStyleData:(id)arg1;
- (void)setStyleIndex:(long long)arg1 withModifyOrder:(_Bool)arg2;
- (long long)getCustomStyleOrder;
- (id)getStyleIDString;
@property(readonly, nonatomic, getter=isNightMapStyle) _Bool nightMapStyle;

@end

