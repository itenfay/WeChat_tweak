//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, QTextStyle;
@protocol QTextChangeDelegate;

@interface QText : NSObject
{
    CDStruct_c3b9c2ee *_points;
    unsigned long long _pointCount;
    int _routeId;
    QTextStyle *_style;
    NSArray *_segments;
    id <QTextChangeDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <QTextChangeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int routeId; // @synthesize routeId=_routeId;
@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) QTextStyle *style; // @synthesize style=_style;
- (id)initWithSegments:(id)arg1;

@end

