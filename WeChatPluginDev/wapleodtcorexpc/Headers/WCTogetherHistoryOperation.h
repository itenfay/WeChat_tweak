//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCDataItem;

@interface WCTogetherHistoryOperation : NSObject
{
    _Bool _didDisplayInHistory;
    _Bool _didDisplayInPreview;
    _Bool _didDisplayInDetail;
    _Bool _didLike;
    _Bool _didComment;
    WCDataItem *_dataItem;
    long long _operatedType;
    double _detailBrowsingAccumulatedTime;
}

- (void).cxx_destruct;
@property(nonatomic) double detailBrowsingAccumulatedTime; // @synthesize detailBrowsingAccumulatedTime=_detailBrowsingAccumulatedTime;
@property(nonatomic) long long operatedType; // @synthesize operatedType=_operatedType;
@property(nonatomic) _Bool didComment; // @synthesize didComment=_didComment;
@property(nonatomic) _Bool didLike; // @synthesize didLike=_didLike;
@property(nonatomic) _Bool didDisplayInDetail; // @synthesize didDisplayInDetail=_didDisplayInDetail;
@property(nonatomic) _Bool didDisplayInPreview; // @synthesize didDisplayInPreview=_didDisplayInPreview;
@property(nonatomic) _Bool didDisplayInHistory; // @synthesize didDisplayInHistory=_didDisplayInHistory;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;

@end

