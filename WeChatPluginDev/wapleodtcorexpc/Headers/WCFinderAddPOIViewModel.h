//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;
@protocol WCFinderAddPOIViewModelDelegate;

@interface WCFinderAddPOIViewModel : NSObject
{
    _Bool _continueFlag;
    id <WCFinderAddPOIViewModelDelegate> _delegate;
    NSMutableArray *_poiInfoList;
    NSString *_finderUsername;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSMutableArray *poiInfoList; // @synthesize poiInfoList=_poiInfoList;
@property(nonatomic) __weak id <WCFinderAddPOIViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchDataWithLastBuffer:(id)arg1;
- (void)fetchNextPageData;
- (void)fetchFirstPageData;
- (id)initWithFinderUsername:(id)arg1;

@end

