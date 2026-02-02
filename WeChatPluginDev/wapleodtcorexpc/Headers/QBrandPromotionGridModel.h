//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSURLSessionDataTask, QBrandPromotionContext, QPolyline;
@protocol QBrandPromotionGridModelDelegate;

@interface QBrandPromotionGridModel
{
    id <QBrandPromotionGridModelDelegate> _delegate;
    NSArray *_items;
    long long _downloadStatus;
    NSURLSessionDataTask *_task;
    QBrandPromotionContext *_brandPromotionContext;
    QPolyline *_polyline;
}

- (void).cxx_destruct;
@property(retain, nonatomic) QPolyline *polyline; // @synthesize polyline=_polyline;
@property(nonatomic) __weak QBrandPromotionContext *brandPromotionContext; // @synthesize brandPromotionContext=_brandPromotionContext;
@property(retain, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property(nonatomic) long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <QBrandPromotionGridModelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)createChildrenHavingItems;
- (id)initWithScael:(unsigned int)arg1 x:(int)arg2 y:(int)arg3 context:(id)arg4;
- (void)dealloc;
- (void)cancelRequestTask;
- (void)handleResponseError:(id)arg1;
- (void)handleResponseData:(id)arg1;
- (void)downloadPromotionData;
- (void)cancelRequest;
- (void)downloadPromotionDataIfNeeded;

@end

