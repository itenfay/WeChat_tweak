//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol WCNetworkMediaInfoDelegate;

@interface WCNetworkMediaInfo
{
    WCNetworkMediaInfo *weakSelf;
    int _source;
    NSString *_vid;
    id <WCNetworkMediaInfoDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCNetworkMediaInfoDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (void)onError:(int)arg1;
- (void)getInfoFromTXVideo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startGetVideoInfo;
- (void)setH5URL:(id)arg1;
- (id)init;

@end

